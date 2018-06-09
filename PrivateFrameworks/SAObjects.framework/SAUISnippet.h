/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUISnippet : SAAceView

@property (nonatomic) long long category;
@property (nonatomic, retain) SAUIConfirmationOptions *confirmationOptions;
@property (nonatomic, retain) SAUISash *sash;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *summaryTitle;
@property (nonatomic, copy) NSString *title;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (long long)category;
- (id)confirmationOptions;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)sash;
- (void)setCategory:(long long)arg1;
- (void)setConfirmationOptions:(id)arg1;
- (void)setSash:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSummaryTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)summaryTitle;
- (id)title;

@end
