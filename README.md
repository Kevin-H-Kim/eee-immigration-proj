# eee-immigration-proj
# 김호준 전기전자공학부 전과 프로젝트입니다 </br>
겨울에 고양이가 도통 움직이지를 않아서 고양이를 놀아줄 방법을 고안해 보았습니다 <br/>
어린아이와 함께 이용해도 재미있을 것입니다 <br/>
LED가 부착된 발광 아케이드 버튼과 I2C LCD 모듈을 이용했습니다 <br/>


## 사진 <br/>
<img width="65%" src="https://github.com/Kevin-H-Kim/eee-immigration-proj/assets/126481852/60793ab0-76ef-4496-9cf0-6761d84102d7"/>
<br/>
상단  <br/> <img width="45%" src="https://github.com/Kevin-H-Kim/eee-immigration-proj/assets/126481852/8777af1c-38ea-4b4b-94c7-9117fec2bbb4"/>  <br/>
측면 <br/> <img width="45%" src="https://github.com/Kevin-H-Kim/eee-immigration-proj/assets/126481852/7a8a74b0-4fb9-454a-9748-49874ac4b111"/> <br/>
후면 <br/> <img width="45%" src="https://github.com/Kevin-H-Kim/eee-immigration-proj/assets/126481852/28144f34-5f30-44c4-a401-16903b2fa60a4"/> <br/>
<br/>

## 조립 방법 <br/>
1. 위에 업로드 된 3D 모델링 파일을 전부 다운로드합니다
2. 3D 프린터를 이용해 해당 모델을 출력합니다 <br/> 필자는 Anycubic I3 Mega 기준 노즐 온도 200°C, 베드 온도 60°C <br/> 내부 밀도 20%, 레이어 높이 0.2mm로 출력하였습니다 <br/> 서포트는 bax-back, box-front 만 사용하시면 되고, 모양은 관계 없습니다
3. 아두이노에 스케치 파일을 복사 혹은 임포트 해주시고, 회로도에 따라 조립합니다 <br/> (cover 부분은 깨지기 쉬우니 절연테이프로 감는 것을 추천합니다) <br/> 3D 프린팅 시의 단차를 고려하여 모델링하였으나 맞지 않을 경우, 사포질해주세요 <br/> 전원은 무엇을 쓰든 관계 없으나 on/off 가 가능한 모델을 추천합니다 <br/> 전원 선은 box-front 의 좌측으로 뽑아주시면 됩니다
<br/> **단, 아케이드버튼의 경우에는 회로를 연결하기 전에 먼저 box-front-cover 에 장착해야 합니다**
4. 모든 구성 요소를 결합하고 전원을 인가합니다

## 회로도 <br/>
회로도 상에는 버튼과 LED가 따로 구성되었지만 실제로는 붙어 있습니다
<br/> 버튼에 따라 gnd 라인을 연결해 주어야 할 수도 있습니다
<br/>
<img width="80%" src="https://github.com/Kevin-H-Kim/eee-immigration-proj/assets/126481852/4d0367ba-3966-4bd7-90b5-738939067f36"/>
<br/>
## 사용 부품 및 주의 사항 <br/>
24mm 직경 발광(LED) 아케이드 버튼 3개 (삼덕사의 제품을 추천합니다. 다른 제품의 경우에는 높이가 높아 하단부를 절단해야 할 수 있습니다) <br/>
I2C 16*2 LCD 모듈<br/>
아두이노 나노 혹은 마이크로 (우노의 경우 너무 커서 호환 불가)<br/>
전선<br/>
인두기와 납<br/>
전원 인가 장치<br/>

