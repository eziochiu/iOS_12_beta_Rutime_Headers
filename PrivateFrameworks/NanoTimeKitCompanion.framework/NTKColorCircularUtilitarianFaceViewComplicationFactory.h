/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKColorCircularUtilitarianFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKUtilityComplicationFactoryDelegate> {
    NTKUtilityComplicationFactory * _complicationFactory;
    <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_colorComplicationSlots;
- (id)_complicationSlots;
- (double)_edgeGapForState:(long long)arg1;
- (double)_keylinePaddingForState:(long long)arg1;
- (double)_lisaGapForState:(long long)arg1;
- (id)_slotForUtilitySlot:(long long)arg1;
- (id)_utilityComplicationSlots;
- (long long)_utilitySlotForSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)delegate;
- (id)initForDevice:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (long long)keylineStyleForComplicationSlot:(id)arg1;
- (id)keylineViewForComplicationSlot:(id)arg1;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)setDelegate:(id)arg1;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;

@end
