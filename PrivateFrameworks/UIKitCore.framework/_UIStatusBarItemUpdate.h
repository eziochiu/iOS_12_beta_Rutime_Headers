/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarItemUpdate : NSObject <NSCopying> {
    _UIStatusBarData * _data;
    bool  _dataChanged;
    bool  _enabilityChanged;
    bool  _enabled;
    NSDictionary * _placementInfo;
    _UIStatusBarStyleAttributes * _styleAttributes;
    bool  _styleAttributesChanged;
}

@property (nonatomic, retain) _UIStatusBarData *data;
@property (nonatomic) bool dataChanged;
@property (nonatomic) bool enabilityChanged;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSDictionary *placementInfo;
@property (nonatomic, retain) _UIStatusBarStyleAttributes *styleAttributes;
@property (nonatomic) bool styleAttributesChanged;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (bool)dataChanged;
- (id)description;
- (bool)enabilityChanged;
- (bool)enabled;
- (id)placementInfo;
- (void)setData:(id)arg1;
- (void)setDataChanged:(bool)arg1;
- (void)setEnabilityChanged:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setPlacementInfo:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setStyleAttributesChanged:(bool)arg1;
- (id)styleAttributes;
- (bool)styleAttributesChanged;

@end
