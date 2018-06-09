/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBDerivedKeyboard : NSObject {
    bool  _addsSupplementaryControlKeys;
    NSString * _derivedKBStarPrefixName;
    struct CGSize { 
        double width; 
        double height; 
    }  _keyboardSize;
}

@property (nonatomic) bool addsSupplementaryControlKeys;
@property (nonatomic, copy) NSString *derivedKBStarPrefixName;
@property (nonatomic) struct CGSize { double x1; double x2; } keyboardSize;

- (void).cxx_destruct;
- (bool)addsSupplementaryControlKeys;
- (id)derivedKBStarPrefixName;
- (struct CGSize { double x1; double x2; })keyboardSize;
- (void)setAddsSupplementaryControlKeys:(bool)arg1;
- (void)setDerivedKBStarPrefixName:(id)arg1;
- (void)setKeyboardSize:(struct CGSize { double x1; double x2; })arg1;

@end
