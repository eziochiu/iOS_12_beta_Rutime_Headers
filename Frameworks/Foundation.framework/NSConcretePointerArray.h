/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcretePointerArray : NSPointerArray {
    unsigned long long  capacity;
    unsigned long long  count;
    unsigned long long  mutations;
    bool  needsCompaction;
    unsigned long long  options;
    struct NSSlice { 
        void **items; 
        bool wantsStrong; 
        bool wantsWeak; 
        bool wantsARC; 
        bool shouldCopyIn; 
        bool usesStrong; 
        bool usesWeak; 
        bool usesARC; 
        bool usesSentinel; 
        bool pointerPersonality; 
        bool integerPersonality; 
        bool simpleReadClear; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    }  slice;
}

+ (bool)supportsSecureCoding;

- (void)_markNeedsCompaction;
- (void)addPointer:(void*)arg1;
- (void)arrayGrow:(unsigned long long)arg1;
- (Class)classForCoder;
- (void)compact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexOfPointer:(void*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)initWithPointerFunctions:(id)arg1;
- (void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void*)pointerAtIndex:(unsigned long long)arg1;
- (id)pointerFunctions;
- (void)removePointer:(void*)arg1;
- (void)removePointerAtIndex:(unsigned long long)arg1;
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2;
- (void)setCount:(unsigned long long)arg1;

@end
