/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARSessionConfiguration : NSObject <NSSecureCoding> {
    bool  _dontPreloadImages;
    bool  _enablePersonalizedRanking;
    <PARResultFactory> * _factory;
    NSString * _identifier;
    NSString * _userAgent;
}

@property bool dontPreloadImages;
@property bool enablePersonalizedRanking;
@property (readonly) <PARResultFactory> *factory;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *userAgent;

+ (id)defaultSessionConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (bool)dontPreloadImages;
- (bool)enablePersonalizedRanking;
- (void)encodeWithCoder:(id)arg1;
- (id)factory;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 userAgent:(id)arg2;
- (id)initWithId:(id)arg1 userAgent:(id)arg2 factory:(id)arg3;
- (void)setDontPreloadImages:(bool)arg1;
- (void)setEnablePersonalizedRanking:(bool)arg1;
- (id)userAgent;

@end
