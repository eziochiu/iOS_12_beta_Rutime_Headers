/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesStyleConfiguration : NSObject {
    FCColor * _background_color;
    NSDictionary * _configDict;
    FCColor * _foreground_color;
    NSString * _label;
    NTPBTopStoriesStyleConfig * _pbConfig;
    unsigned long long  _storyType;
    NSString * _stringType;
}

@property (nonatomic, readonly) FCColor *background_color;
@property (nonatomic, readonly) FCColor *foreground_color;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long storyType;
@property (nonatomic, readonly) NSString *stringType;

- (void).cxx_destruct;
- (id)background_color;
- (id)foreground_color;
- (unsigned long long)hash;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBTopStoriesStyleConfig:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)storyType;
- (id)stringType;

@end
