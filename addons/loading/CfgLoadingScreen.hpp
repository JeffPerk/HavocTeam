#define LOADING_SCREEN_CLASS(className,authorName) \
    class className { \
        author = QUOTE(authorName); \
        path = QPATHTOF(ui\loading\##className##.paa); \
    }

class GVAR(CfgLoadingScreen) {
    class Backgrounds {
        LOADING_SCREEN_CLASS(AdobeStock_269676636,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_269676677,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_271859839,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_285905473,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_296841733,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_297308106,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_298480575,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_361616315,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_287796119,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_288887578,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_319048089,YonV);
        LOADING_SCREEN_CLASS(maxresdefault,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_269677107,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_272813407,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_275306051,YonV);
        LOADING_SCREEN_CLASS(AdobeStock_283924597,YonV);
    };
};
