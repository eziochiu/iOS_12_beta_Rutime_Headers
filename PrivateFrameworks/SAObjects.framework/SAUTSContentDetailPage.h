/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUTSContentDetailPage : SAAceView

@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, retain) SAUIImageResource *image;
@property (nonatomic, copy) NSString *utsId;

+ (id)contentDetailPage;
+ (id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (void)setContentType:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setUtsId:(id)arg1;
- (id)utsId;

@end
