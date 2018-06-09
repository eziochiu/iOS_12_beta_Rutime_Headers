/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFJudge : NSObject {
    WFLSMMap * map;
}

+ (id)defaultJudge;
+ (id)defaultLSMMapPath;

- (id)_pronounceOnWebpage:(id)arg1;
- (id)initWithMap:(id)arg1;
- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 debugPage:(id*)arg3 pageTitle:(id*)arg4;
- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 whitelistUserPreferences:(id)arg3 debugPage:(id*)arg4 pageTitle:(id*)arg5;
- (id)pronounceOnWebpage:(id)arg1;

@end
