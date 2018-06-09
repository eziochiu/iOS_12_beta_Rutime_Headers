/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableControlCellSelection : TSKSelection {
    bool  _keyboardShown;
}

@property (getter=isKeyboardShown, nonatomic, readonly) bool keyboardShown;

+ (Class)archivedSelectionClass;
+ (id)controlCellSelection;

- (id)copy;
- (id)initWithKeyboardShown:(bool)arg1;
- (bool)isKeyboardShown;

@end
