/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSFrozenSetM : NSSet {
    /* Warning: Unrecognized filer type: '^' using 'void*' */ void* cow;
    /* Warning: unhandled struct encoding: '{?="objs"^@"state"(?="mutations"Q""{?="muts"I"used"b26"szidx"b6})}' */ struct { 
        state **objs; 
    }  storage;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (double)clumpingFactor;
- (double)clumpingInterestingThreshold;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1 count:(unsigned long long)arg2;
- (id)member:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;

@end
