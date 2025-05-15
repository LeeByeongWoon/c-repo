// "상담" 두 글자 반복 자동화 스크립트 (2초 간격)
(function () {
    // 중복 실행 방지
    if (window.consultBot) {
        console.log('이미 실행 중입니다. 중지하려면 stopConsult()를 입력하세요.');
        return;
    }

    // 중지 함수
    window.stopConsult = function () {
        if (window.consultInterval) {
            clearInterval(window.consultInterval);
            window.consultInterval = null;
        }
        window.consultBot = false;
        console.log('자동 메시지 전송이 중지되었습니다.');
    };

    // 상태 변수 설정
    window.consultBot = true;

    // 메시지 전송 함수
    function sendConsult() {
        // 기본 요소 찾기
        const textarea = document.querySelector('textarea.msg');
        const sendButton = document.querySelector('.btn_send');

        if (!textarea || !sendButton) return;

        try {
            // React 속성 찾기
            const reactPropsKey = Object.keys(textarea).find(key => key.startsWith('__reactProps$'));

            // 메시지 설정
            textarea.value = '상담';

            if (reactPropsKey) {
                // React 방식 처리
                const reactProps = textarea[reactPropsKey];
                if (typeof reactProps.onChange === 'function') {
                    reactProps.onChange({
                        target: {value: '상담'},
                        currentTarget: {value: '상담'},
                        preventDefault: () => {
                        },
                        stopPropagation: () => {
                        }
                    });

                    // 버튼 클릭
                    setTimeout(() => {
                        if (!sendButton.disabled) sendButton.click();
                    }, 200);

                    return;
                }
            }

            // 일반 DOM 방식 처리
            textarea.dispatchEvent(new Event('input', {bubbles: true}));
            textarea.dispatchEvent(new Event('change', {bubbles: true}));

            setTimeout(() => {
                if (!sendButton.disabled) sendButton.click();
            }, 200);

        } catch (e) {
            console.log('메시지 전송 실패');
        }
    }

    // 메시지 전송 간격 (2초)
    const interval = 2000;
    console.log('"상담" 메시지 자동 전송을 시작합니다(2초 간격). 중지하려면 stopConsult()를 입력하세요.');

    // 주기적으로 메시지 전송
    window.consultInterval = setInterval(sendConsult, interval);

    // 즉시 첫 메시지 전송
    sendConsult();
})();