/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMenuPageSectionContext : NSObject {
    NSMutableDictionary * _sections;
    long long  _selectedIndex;
}

@property (nonatomic) long long selectedIndex;

- (void).cxx_destruct;
- (id)sectionsForIndex:(long long)arg1;
- (long long)selectedIndex;
- (void)setSections:(id)arg1 forIndex:(long long)arg2;
- (void)setSelectedIndex:(long long)arg1;

@end
