/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStockPrototypeHeaderHelper : NSObject {
    NSMutableArray * _popupItemStrings;
    NSMutableDictionary * _selectedIndexPerColumn;
}

@property (nonatomic, retain) NSMutableArray *popupItemStrings;
@property (nonatomic, retain) NSMutableDictionary *selectedIndexPerColumn;

- (void).cxx_destruct;
- (void)addPopupItemString:(id)arg1 mode:(short)arg2;
- (id)init;
- (id)popupAttributeDisplayStrings;
- (id)popupItemStrings;
- (double)selectedIndexAtColumn:(unsigned char)arg1;
- (id)selectedIndexPerColumn;
- (void)setPopupItemStrings:(id)arg1;
- (void)setSelectedIndexPerColumn:(id)arg1;

@end
