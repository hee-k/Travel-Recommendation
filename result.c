#include <stdio.h>
#include <Windows.h>

void question(void) {
	startline(70);
	middleline1(1, 70);
	printf("│\t\t\t ★ 분  석  결  과 ★\t\t\t       │");
	middleline2(1, 70);
	printf("│\t\t     당신의 취향에 딱 맞는 여행지는\t\t       │");
	middleline2(2, 70);
}

void game(void) {
	startline(70);
	middleline1(1, 70);
	printf("│\t\t\t ☆ 추  첨  결  과 ☆\t\t\t       │");
	middleline2(1, 70);
	printf("│\t\t      당신에게 추천하는 여행지는\t\t       │");
	middleline2(2, 70);
}

// 여행지 출력
void travel(int type, int destination) {
	system("cls");

	if (type == 1)
		question();
	else if (type == 2)
		game();

	switch (destination) {

	case 1:// 공주 한옥마을
		printf("│\t\t\t\"공주 한옥마을\" 입니다!\t\t\t       │");
		middleline2(1, 70);
		endline(70);
		printf("\n\n■□■□■□■□■□■□■□ 여행지 정보 ■□■□■□■□■□■□■□■\n\n\n\n");
		printf("위    치 : 충남 공주시 관광단지길 12\n\n");
		printf("특    징 : 전통과 현대가 공존하는 어울림의 미학이 있는 공주 한옥마을!\n\n");
		printf("\t   우리나라 전통 가옥 형태인 한옥에서 숙박이 가능한 마을입니다.\n\n");
		printf("\t   전통 문화 체험, 둘레길 형성이 잘 되어있습니다.\n\n");
		printf("정    보 : 주차료, 입장료 무료\n\n");
		printf("홈페이지 : http://www.gongju.go.kr/hanok/ \n\n\n\n");
		printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n\n\n");
		break;
	case 2:// 예산 수덕사
		printf("│\t\t\t\"예산 수덕사\" 입니다!\t\t\t       │");
		middleline2(1, 70);
		endline(70);
		printf("\n\n■□■□■□■□■□■□■□ 여행지 정보 ■□■□■□■□■□■□■□■\n\n\n\n");
		printf("위    치 : 충청남도 예산군 덕산면 수덕사 안길 79\n\n");
		printf("특    징 : 우리나라 불교계에서 중요한 사찰인 수덕사!\n\n");
		printf("\t   백제 후기에 창건된 수덕사의 모습을 볼 수 있습니다.\n\n");
		printf("홈페이지 : http://www.sudeoksa.com/ \n\n\n\n");
		printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n\n\n");
		break;
	case 3:// 천안 독립 기념관
		printf("│\t\t      \"천안 독립 기념관\" 입니다!\t\t       │");
		middleline2(1, 70);
		endline(70);
		printf("\n\n■□■□■□■□■□■□■□ 여행지 정보 ■□■□■□■□■□■□■□■\n\n\n\n");
		printf("위    치 : 천안시 동남구 목천읍 KR독립기년관로1\n\n");
		printf("특    징 : 일본 식민지 시대의 독립 운동과 한국 역사를 알 수 있습니다.\n\n");
		printf("\t   4D극장이 있어서 생동감 있게 감상할 수 있습니다.\n\n");
		printf("주변정보 : 공원 안에 캠핑을 할 수 있는 공간이 마련되어 있습니다.\n\n");
		printf("홈페이지 : https://i815.or.kr/ \n\n\n\n");
		printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n\n\n");
		break;
	case 4:// 예산 한국 고건축 박물관
		printf("│\t\t  \"예산 한국 고건축 박물관\" 입니다!\t\t       │");
		middleline2(1, 70);
		endline(70);
		printf("\n\n■□■□■□■□■□■□■□ 여행지 정보 ■□■□■□■□■□■□■□■\n\n\n\n");
		printf("위    치 : 충남 예산군 덕산면 홍덕서로 543 한국고건축박물관\n\n");
		printf("특    징 : 우리 민족 고유의 건축미를 감상할 수 있습니다.\n\n");
		printf("\t   삼국시대부터 조선시대까지 대표 사찰과 탑, 궁궐 모형이 전시되어 있습니다.\n\n");
		printf("\t   우리나라 국보 1호 숭례문의 모형도 보실 수 있습니다.\n\n");
		printf("정    보 : 입장료 무료, 주차료 무료\n\n");
		printf("홈페이지 : https://www.yesan.go.kr/tour/sub01_01_03_06.do \n\n\n\n");
		printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n\n\n");
		break;
	case 5:// 아산 지중해 마을
		printf("│\t\t\t\"아산 지중해 마을\" 입니다!\t\t       │");
		middleline2(1, 70);
		endline(70);
		printf("\n\n■□■□■□■□■□■□■□ 여행지 정보 ■□■□■□■□■□■□■□■\n\n\n\n");
		printf("위    치 : 충남 아산시 탕정면 탕정면로8번길 55-7\n\n");
		printf("특    징 : 지중해풍의 독특한 건축물을 볼 수 있습니다.\n\n");
		printf("\t   프로방스, 파르테논, 산토리니 세 가지 양식의 테마를 구경할 수 있습니다.\n\n");
		printf("\t   건물들이 예쁘고 야경이 화려해서 사진 촬영에 제격입니다!\n\n");
		printf("정    보 : 현충사에서 15분 거리\n\n");
		printf("상세리뷰 : https://blog.naver.com/karisma9013/222272544847 \n\n\n\n");
		printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n\n\n");
		break;
	case 6:// 용봉산
		printf("│\t\t\t\"홍성 용봉산\" 입니다!\t\t\t       │");
		middleline2(1, 70);
		endline(70);
		printf("\n\n■□■□■□■□■□■□■□ 여행지 정보 ■□■□■□■□■□■□■□■\n\n\n\n");
		printf("위    치 : 충남 홍성군 홍북읍\n\n");
		printf("특    징 : 충남의 금강산으로 불리는 곳으로 바위와 소나무가 많아 경치가 아름다운 용봉산!\n\n");
		printf("\t   코스별로 등산이 가능해서 여러번 방문해도 지루하지 않습니다.\n\n");
		printf("\t   새로운 등산 스타일을 원한다면 바위가 많은 코스에서 암벽등반도 할 수 있습니다.\n\n");
		printf("정    보 : 입장료 성인 1,000원(홍성군민 할인)\n\n");
		printf("상세리뷰 : https://blog.naver.com/zz0507/222322766505 \n\n\n\n");
		printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n\n\n");
		break;
	case 7:// 당진 삽교호 놀이동산
		printf("│\t\t     \"당진 삽교호 놀이동산\" 입니다!\t\t       │");
		middleline2(1, 70);
		endline(70);
		printf("\n\n■□■□■□■□■□■□■□ 여행지 정보 ■□■□■□■□■□■□■□■\n\n\n\n");
		printf("위    치 : 충남 당진시 신평면 삽교천3길 15\n\n");
		printf("특    징 : 서해대교와 바다가 보이는 아름다운 풍경과 함상공원 및 다양한 놀거리가 있습니다.\n\n");
		printf("\t   놀이시설과 공원이 있어서 가족들과 함께 가기 좋온 여행지입니다.\n\n");
		printf("주변정보 : 바다공원, 사격장, 4D극장, 야구연습장\n\n");
		printf("홈페이지 : http://www.sghland.com/ \n\n\n\n");
		printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n\n\n");
		break;
	case 8:// 대천 해수욕장
		printf("│\t\t\t\"대천 해수욕장\" 입니다!\t\t\t       │");
		middleline2(1, 70);
		endline(70);
		printf("\n\n■□■□■□■□■□■□■□ 여행지 정보 ■□■□■□■□■□■□■□■\n\n\n\n");
		printf("위    치 : 충남 보령시 신흑동\n\n");
		printf("특    징 : 기분 좋은 해수욕을 즐길 수 있습니다.\n\n");
		printf("\t   백사장 너머의 솔숲은 울창하고 아늑해서 야영장으로도 나무랄 데 없는 여행지 입니다.\n\n");
		printf("주변정보 : 숙박 업소, 마트, 찜질방, 공영야영장, 박물관\n\n");
		printf("홈페이지 : http://daecheonbeach.kr/ \n\n\n\n");
		printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n\n\n");
		break;
	case 9:// 금산 하늘 물빛 정원
		printf("│\t\t     \"금산 하늘 물빛 정원\" 입니다!\t\t       │");
		middleline2(1, 70);
		endline(70);
		printf("\n\n■□■□■□■□■□■□■□ 여행지 정보 ■□■□■□■□■□■□■□■\n\n\n\n");
		printf("위    치 : 충청남도 금산군 추부면 검한1길 156\n\n");
		printf("특    징 : 잠시 시간이 멈춘 듯 고요한 평화와 푸르른 나무들이 맑은 호수에 펼쳐져있습니다.\n\n");
		printf("주변정보 : 장애인 전용 포함 주차장, 매점, 흡연구역, 공중화장실, 수유실, 등산로\n\n");
		printf("홈페이지 : http://www.gardenofsky.com/ \n\n\n\n");
		printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n\n\n");
		break;
	case 10:// 예산 덕산 온천
		printf("│\t\t\t\"예산 덕산 온천\" 입니다!\t\t       │");
		middleline2(1, 70);
		endline(70);
		printf("\n\n■□■□■□■□■□■□■□ 여행지 정보 ■□■□■□■□■□■□■□■\n\n\n\n");
		printf("위    치 : 충청남도 예산군 덕산면 온천단지3로 84\n\n");
		printf("특    징 : 천연 중탄산나트륨 온천인 예산 덕산 온천!\n\n");
		printf("\t   근육통, 관절염, 신경통, 혈액순환 등을 촉진시켜 주는 효능있습니다.\n\n");
		printf("정    보 : 덕산온천 족욕장, 가야관광 호텔온천\n\n");
		printf("상세리뷰 : https://blog.naver.com/ichmount/222266543876 \n\n\n\n");
		printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n\n\n");
		break;
	case 11:// 태안 빛 축제
		printf("│\t\t\t\"태안 빛 축제\" 입니다!\t\t\t       │");
		middleline2(1, 70);
		endline(70);
		printf("\n\n■□■□■□■□■□■□■□ 여행지 정보 ■□■□■□■□■□■□■□■\n\n\n\n");
		printf("위    치 : 충청남도 태안군 남면 마검포길 200\n\n");
		printf("특    징 : 대한민국의 밤하늘을 책임지는 여행지입니다.\n\n");
		printf("주변정보 : 곰섬해수욕장, 삼도, 태안 백합꽃 축제, 태안 연꽃 축제\n\n");
		printf("홈페이지 : http://www.ffestival.co.kr/ \n\n\n\n");
		printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n\n\n");
		break;
	case 12:// 당진 난지섬
		printf("│\t\t\t\"당진 난지섬\" 입니다!\t\t\t       │");
		middleline2(1, 70);
		endline(70);
		printf("\n\n■□■□■□■□■□■□■□ 여행지 정보 ■□■□■□■□■□■□■□■\n\n\n\n");
		printf("위    치 : 충남 당진시 석문면 난지도리\n\n");
		printf("특    징 : 서해의 가장 맑은 바다로 당진에서 가장 큰 섬입니다.\n\n");
		printf("\t   여름에는 해수욕을 할 수 있고, 사시사철 캠핑, 낚시 등 즐길 거리가 가득합니다.\n\n");
		printf("\t   둘레길이 잘 형성되어 있어서 산책하기에 좋은 여행지입니다.\n\n");
		printf("주변정보 : 장고항 실치축제, 왜목 해돋이 등 다양한 여가 활동 가능\n\n");
		printf("홈페이지 : https://www.dangjin.go.kr/prog/tursmCn/tour/sub01_01_03/view.do?cntno=12 \n\n\n\n");
		printf("□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■□■\n\n");
		break;
	}
	printf("여행지 출력이 모두 끝났습니다. 엔터 키를 눌러주세요.");
	getch();
}

// 처음으로 돌아가기 or 프로그램 끝내기
int reply(void) {
	int input = 0;
	system("cls");
	startline(70);
	middleline1(1, 70);
	printf("│\t\t    여행지 추천이 완료되었습니다!\t\t       │");
	middleline2(1, 70);
	printf("│\t\t    즐거운 여행이 되기를 바랍니다~\t\t       │");
	middleline2(1, 70);
	endline(70);
	printf("\n\n\t원하시는 메뉴를 슷자로 입력해주세요.\n\n\n");
	printf("\t1 : 처음 화면으로 돌아가기\n\n");
	printf("\t2 : 프로그램 종료\n\n");
	printf("\t답변 : _\b");
	scanf_s("%d", &input);

	if (input == 1) {
		int j = 3;

		for (int i = 0; i < 3; i++) {
			system("cls");
			printf("\n\t%d초 후 처음 화면으로 돌아갑니다.", j--);
			Sleep(750);
		}
		return 1;
	}
	else if (input == 2)
		return 2;
}