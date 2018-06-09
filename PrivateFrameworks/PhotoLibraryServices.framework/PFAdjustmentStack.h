/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFAdjustmentStack : NSObject <NSCopying, NSFastEnumeration> {
    NSArray * _adjustments;
    unsigned long long  _formatVersion;
    NSOrderedSet * _maskUUIDs;
}

+ (bool)isValidEnvelopeDictionary:(id)arg1 errors:(id)arg2;

- (void).cxx_destruct;
- (id)adjustmentAtIndex:(unsigned long long)arg1;
- (id)adjustmentsWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)debugDescription;
- (id)description;
- (id)envelopeDictionary;
- (id)firstAdjustmentWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithAdjustments:(id)arg1;
- (id)initWithEnvelopeDictionary:(id)arg1;
- (id)maskUUIDs;

@end
