/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKStackedTextItem : NSObject {
    bool  _deemphasizedPrimary;
    NSString * _groupingIdentifier;
    unsigned long long  _numberOfContentRows;
    NSString * _primary;
    NSString * _secondary;
    bool  _significantPrimary;
    bool  _strikethroughPrimary;
    NSString * _tertiary;
    NSString * _title;
}

@property (getter=isDeemphasizedPrimary, nonatomic) bool deemphasizedPrimary;
@property (nonatomic, readonly, copy) NSString *groupingIdentifier;
@property (nonatomic, readonly) unsigned long long numberOfContentRows;
@property (nonatomic, copy) NSString *primary;
@property (nonatomic, copy) NSString *secondary;
@property (getter=isSignificantPrimary, nonatomic) bool significantPrimary;
@property (getter=isStrikethroughPrimary, nonatomic) bool strikethroughPrimary;
@property (nonatomic, copy) NSString *tertiary;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)groupingIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithNumberOfContentRows:(unsigned long long)arg1 groupingIdentifier:(id)arg2;
- (bool)isDeemphasizedPrimary;
- (bool)isEqual:(id)arg1;
- (bool)isSignificantPrimary;
- (bool)isStrikethroughPrimary;
- (unsigned long long)numberOfContentRows;
- (id)primary;
- (id)secondary;
- (void)setDeemphasizedPrimary:(bool)arg1;
- (void)setPrimary:(id)arg1;
- (void)setSecondary:(id)arg1;
- (void)setSignificantPrimary:(bool)arg1;
- (void)setStrikethroughPrimary:(bool)arg1;
- (void)setTertiary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)tertiary;
- (id)title;

@end
