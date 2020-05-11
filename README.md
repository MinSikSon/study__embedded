# study__embedded
## 파일
* helloworldarm.s 는 GNU assembly 인 듯?

## arm 명령어
* STMFD [참고](http://recipes.egloos.com/5059742)
    * ST : STore
	* M : Multiple ; 모든 명령어
    * FD : Full Descending

	* STMFD		sp!,{r1-r3,lr}		; sp는 R13 stack pointer
									; lr은 R14 Linked Register

* LDMFD
    * LD : LoaD

* MOV

* LDR

* BL

* MOV

* ADR
    * 의사 명령어 (가짜 명령어)
	* 편의를 위해 assembly에는 있지만 실제로 처리는 다른 방법으로하는 명령어
	* 특별한 주소 값을 Loading 할 때 이런 명령어가 사용 됨
	* ex. ADR r5, Data ; r5에 Data의 주소를 Load

* DCD

* DCB

* MCR
    * C<-R
	* C: COPROCESSOR Register 번호
	* R: Core 의 일반 Register
    * ex. MCR p15, 0, r4, c2, c0, 0 ; coprocessor 15번 2번 register 에 r4 값을 전송하라는 뜻
