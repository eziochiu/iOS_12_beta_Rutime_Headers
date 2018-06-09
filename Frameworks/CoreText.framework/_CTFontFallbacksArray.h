/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface _CTFontFallbacksArray : NSArray {
    const struct TBaseFont { int (**x1)(); struct atomic<int> { int x_2_1_1; } x2; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { /* Warning: Unrecognized filer type: '^' using 'void*' */ void*x_1_2_1; struct __CFData {} x_1_2_2; } x_3_1_1; } x3; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { void*x_1_2_1; struct __CFData {} x_1_2_2; } x_4_1_1; } x4; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { void*x_1_2_1; struct __CFData {} x_1_2_2; } x_5_1_1; } x5; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { void*x_1_2_1; struct __CFData {} x_1_2_2; } x_6_1_1; } x6; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { void*x_1_2_1; struct __CFData {} x_1_2_2; } x_7_1_1; } x7; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { void*x_1_2_1; struct __CFData {} x_1_2_2; } x_8_1_1; } x8; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { void*x_1_2_1; struct __CFData {} x_1_2_2; } x_9_1_1; } x9; } * _baseFont;
    NSArray * _cascade;
    unsigned long long  _count;
    NSMutableArray * _fallbacks;
    unsigned long long  _hash;
    struct TUnfairLock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } fLock; 
    }  _lock;
    const struct TTraitsValues { unsigned int x1; double x2; double x3; double x4; } * _refTraits;
    struct TTraitsValues { 
        unsigned int fSymbolic; 
        double fWeight; 
        double fWidth; 
        double fSlant; 
    }  _traitsValue;
}

- (id).cxx_construct;
- (struct __CTFontDescriptor { }*)cachedDescriptorForCharacter:(unsigned short)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithBaseFont:(const struct TBaseFont { int (**x1)(); struct atomic<int> { int x_2_1_1; } x2; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { /* Warning: Unrecognized filer type: '^' using 'void*' */ void*x_1_2_1; struct __CFData {} x_1_2_2; } x_3_1_1; } x3; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { void*x_1_2_1; struct __CFData {} x_1_2_2; } x_4_1_1; } x4; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { void*x_1_2_1; struct __CFData {} x_1_2_2; } x_5_1_1; } x5; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { void*x_1_2_1; struct __CFData {} x_1_2_2; } x_6_1_1; } x6; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { void*x_1_2_1; struct __CFData {} x_1_2_2; } x_7_1_1; } x7; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { void*x_1_2_1; struct __CFData {} x_1_2_2; } x_8_1_1; } x8; struct TCFRef<const __CFData *> { struct TAtomicPtr<const __CFData *> { void*x_1_2_1; struct __CFData {} x_1_2_2; } x_9_1_1; } x9; }*)arg1 cascade:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1 shouldLock:(bool)arg2 addRanges:(bool)arg3;

@end
