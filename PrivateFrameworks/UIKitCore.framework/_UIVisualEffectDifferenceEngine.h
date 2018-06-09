/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIVisualEffectDifferenceEngine : NSObject {
    NSArray * _destination;
    long long  _destinationCount;
    long long  _innerDestinationCount;
    long long  _innerSourceCount;
    long long * _mergeTable;
    NSArray * _merged;
    long long  _prefixCount;
    NSArray * _source;
    long long  _sourceCount;
    long long  _suffixCount;
}

@property (nonatomic, copy) NSArray *destination;
@property (nonatomic, readonly, copy) NSArray *merged;
@property (nonatomic, copy) NSArray *source;

- (void).cxx_destruct;
- (void)_calculate;
- (void)_calculateLCSSTable;
- (void)_calculateMerge;
- (void)_calculatePrefixAndSuffix;
- (void)_reset;
- (void)dealloc;
- (id)describeMergeTable;
- (id)description;
- (id)destination;
- (id)mergeSource:(id)arg1 andDestination:(id)arg2;
- (id)merged;
- (void)setDestination:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
