/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAdComponentInserter : NSObject <SXComponentInserter> {
    <SXAdvertisingSettingsProvider> * _advertisingSettingsProvider;
    <SXComponentInsertionConditionEngine> * _conditionEngine;
    long long  _insertedCount;
    double  _lastInsertedYOffset;
}

@property (nonatomic, readonly) <SXAdvertisingSettingsProvider> *advertisingSettingsProvider;
@property (nonatomic, readonly) <SXComponentInsertionConditionEngine> *conditionEngine;
@property (nonatomic, readonly) NSArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long insertedCount;
@property (nonatomic) double lastInsertedYOffset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)adTypeFromBannerType:(unsigned long long)arg1;
- (id)advertisingSettingsProvider;
- (id)componentInsertForMarker:(id)arg1 layoutProvider:(id)arg2;
- (unsigned long long)componentTraits;
- (id)conditionEngine;
- (id)conditions;
- (id)initWithConditionEngine:(id)arg1 advertisingSettingsProvider:(id)arg2;
- (long long)insertedCount;
- (double)lastInsertedYOffset;
- (void)setInsertedCount:(long long)arg1;
- (void)setLastInsertedYOffset:(double)arg1;
- (bool)validateMarker:(id)arg1 remainingMarkerCount:(unsigned long long)arg2 layoutProvider:(id)arg3;

@end
