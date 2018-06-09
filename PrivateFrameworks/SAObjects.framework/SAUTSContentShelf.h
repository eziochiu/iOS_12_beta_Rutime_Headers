/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUTSContentShelf : SAAceView

@property (nonatomic, copy) NSArray *contentHead;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSURL *url;

+ (id)contentShelf;
+ (id)contentShelfWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentHead;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setContentHead:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)url;

@end
