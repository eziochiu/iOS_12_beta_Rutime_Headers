/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBKeyplaneChangeContext : NSObject {
    bool  _selfSizingChanged;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _sizeDidChange;
    bool  _splitWidthsChanged;
    bool  _updateAssistantView;
}

@property (nonatomic) bool selfSizingChanged;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) bool sizeDidChange;
@property (nonatomic) bool splitWidthsChanged;
@property (nonatomic) bool updateAssistantView;

+ (id)keyplaneChangeContext;
+ (id)keyplaneChangeContextWithSize:(struct CGSize { double x1; double x2; })arg1;

- (bool)selfSizingChanged;
- (void)setSelfSizingChanged:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSplitWidthsChanged:(bool)arg1;
- (void)setUpdateAssistantView:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)sizeDidChange;
- (bool)splitWidthsChanged;
- (bool)updateAssistantView;

@end
