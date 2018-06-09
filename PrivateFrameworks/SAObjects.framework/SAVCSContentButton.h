/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAVCSContentButton : SAUIButton

@property (nonatomic, copy) NSString *canonicalId;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSArray *togglePlayPauseCommands;

+ (id)contentButton;
+ (id)contentButtonWithDictionary:(id)arg1 context:(id)arg2;

- (id)canonicalId;
- (id)contentType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCanonicalId:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setTogglePlayPauseCommands:(id)arg1;
- (id)togglePlayPauseCommands;

@end
