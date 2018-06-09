/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPMergedNameItem : NSObject {
    unsigned long long  _fodMerges;
    NSMutableSet * _mergedCityNames;
    PPName * _mergedName;
    NSMutableSet * _mergedStreetNames;
    PPContactNameRecord * _originalNameItem;
}

@property (nonatomic) unsigned long long fodMerges;
@property (nonatomic, retain) NSMutableSet *mergedCityNames;
@property (nonatomic, retain) PPName *mergedName;
@property (nonatomic, retain) NSMutableSet *mergedStreetNames;
@property (nonatomic, retain) PPContactNameRecord *originalNameItem;

- (void).cxx_destruct;
- (unsigned long long)fodMerges;
- (id)mergedCityNames;
- (id)mergedName;
- (id)mergedStreetNames;
- (id)originalNameItem;
- (void)setFodMerges:(unsigned long long)arg1;
- (void)setMergedCityNames:(id)arg1;
- (void)setMergedName:(id)arg1;
- (void)setMergedStreetNames:(id)arg1;
- (void)setOriginalNameItem:(id)arg1;

@end
