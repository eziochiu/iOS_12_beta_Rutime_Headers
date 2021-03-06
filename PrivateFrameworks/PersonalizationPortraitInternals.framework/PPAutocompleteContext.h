/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPAutocompleteContext : NSObject {
    NSString * _name;
    NSArray * _recipients;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSArray *recipients;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAutocompleteContext:(id)arg1;
- (id)name;
- (id)recipients;
- (void)setName:(id)arg1;
- (void)setRecipients:(id)arg1;

@end
