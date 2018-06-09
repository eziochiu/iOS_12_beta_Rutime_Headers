/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTHeroImageItem : AceObject <SASTTemplateItem>

@property (nonatomic, retain) SADecoratedString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *position;
@property (readonly) Class superclass;
@property (nonatomic, retain) SAUINanoImageResource *watchImageResource;

+ (id)heroImageItem;
+ (id)heroImageItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)caption;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)position;
- (void)setCaption:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setWatchImageResource:(id)arg1;
- (id)watchImageResource;

@end
