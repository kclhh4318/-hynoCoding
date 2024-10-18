#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_DISTRICTS 25
#define MAX_DONGS 20
#define MAX_NAME_LENGTH 20

struct District {
    char name[MAX_NAME_LENGTH];
    char dongs[MAX_DONGS][MAX_NAME_LENGTH];
    int dong_count;
};

struct District seoul_districts[MAX_DISTRICTS] = {
    {"강남구", {"역삼동", "개포동", "청담동", "삼성동", "대치동"}, 5},
    {"강동구", {"강일동", "상일동", "명일동", "고덕동", "암사동"}, 5},
    {"강북구", {"미아동", "번동", "수유동", "우이동"}, 4},
    {"강서구", {"염창동", "등촌동", "화곡동", "가양동", "마곡동"}, 5},
    {"관악구", {"봉천동", "신림동", "남현동"}, 3},
    {"광진구", {"중곡동", "능동", "구의동", "광장동", "자양동"}, 5},
    {"구로구", {"신도림동", "구로동", "가리봉동", "고척동", "개봉동"}, 5},
    {"금천구", {"가산동", "독산동", "시흥동"}, 3},
    {"노원구", {"월계동", "공릉동", "하계동", "중계동", "상계동"}, 5},
    {"도봉구", {"쌍문동", "방학동", "창동", "도봉동"}, 4},
    {"동대문구", {"용신동", "제기동", "전농동", "장안동", "회기동"}, 5},
    {"동작구", {"노량진동", "상도동", "흑석동", "사당동", "대방동"}, 5},
    {"마포구", {"공덕동", "아현동", "용강동", "대흥동", "신수동"}, 5},
    {"서대문구", {"충현동", "천연동", "신촌동", "연희동", "홍제동"}, 5},
    {"서초구", {"서초동", "잠원동", "반포동", "방배동", "양재동"}, 5},
    {"성동구", {"왕십리동", "마장동", "사근동", "행당동", "응봉동"}, 5},
    {"성북구", {"성북동", "삼선동", "동선동", "돈암동", "안암동"}, 5},
    {"송파구", {"풍납동", "거여동", "마천동", "방이동", "오금동"}, 5},
    {"양천구", {"목동", "신월동", "신정동"}, 3},
    {"영등포구", {"영등포동", "여의도동", "당산동", "도림동", "문래동"}, 5},
    {"용산구", {"후암동", "용산동", "남영동", "청파동", "원효로동"}, 5},
    {"은평구", {"녹번동", "불광동", "갈현동", "구산동", "대조동"}, 5},
    {"종로구", {"청운효자동", "사직동", "삼청동", "부암동", "평창동"}, 5},
    {"중구", {"소공동", "회현동", "명동", "필동", "장충동"}, 5},
    {"중랑구", {"면목동", "상봉동", "중화동", "묵동", "망우동"}, 5}
};

int main() {
    srand(time(NULL));  // 난수 생성기 초기화

    int district_count = sizeof(seoul_districts) / sizeof(seoul_districts[0]);
    int random_district = rand() % district_count;

    struct District selected_district = seoul_districts[random_district];
    int random_dong = rand() % selected_district.dong_count;

    printf("선택된 위치: %s %s\n", selected_district.name, selected_district.dongs[random_dong]);

    return 0;
}