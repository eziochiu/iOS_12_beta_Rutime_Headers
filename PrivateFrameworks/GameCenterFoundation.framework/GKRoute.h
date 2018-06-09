/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKRoute : NSObject {
    NSArray * _parameterNames;
    NSRegularExpression * _regex;
    NSString * _scheme;
}

- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 scheme:(id)arg2;
- (bool)matchesURL:(id)arg1;
- (bool)matchesURL:(id)arg1 parameters:(id*)arg2;
- (id)nonParameterCharacterSet;

@end
