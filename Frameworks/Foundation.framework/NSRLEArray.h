/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {
    struct _NSRefCountedRunArray { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct _NSRunArrayItem { unsigned long long x_8_1_1; id x_8_1_2; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_8_1_3; } x8[0]; } * theList;
}

- (void)_makeNewListFrom:(struct _NSRefCountedRunArray { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct _NSRunArrayItem { unsigned long long x_8_1_1; id x_8_1_2; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_8_1_3; } x8[0]; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithRefCountedRunArray:(struct _NSRefCountedRunArray { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct _NSRunArrayItem { unsigned long long x_8_1_1; id x_8_1_2; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_8_1_3; } x8[0]; }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 runIndex:(unsigned long long*)arg3;
- (id)objectAtRunIndex:(unsigned long long)arg1 length:(unsigned long long*)arg2;

@end
