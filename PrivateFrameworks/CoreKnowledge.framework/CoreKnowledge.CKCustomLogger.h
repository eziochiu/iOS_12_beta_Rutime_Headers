/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKCustomLogger : NSObject {
    void defaultSettings;
    void enabled;
    void level;
    void name;
    void settings;
}

@property (nonatomic) bool enabled;
@property (nonatomic, readonly) NSString *name;

- (id /* block */).cxx_destruct;
- (bool)enabled;
- (id)init;
- (id)name;
- (void)setEnabled:(bool)arg1;
- (void)setFormatWithName:(bool)arg1 file:(bool)arg2 method:(bool)arg3;

@end
