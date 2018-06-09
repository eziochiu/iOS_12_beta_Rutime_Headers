/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLengthFormatter : NSFormatter <NSObservable, NSObserver> {
    void * _formatter;
    bool  _isForPersonHeight;
    void * _reserved;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForPersonHeightUse) bool forPersonHeightUse;
@property (readonly) unsigned long long hash;
@property (copy) NSNumberFormatter *numberFormatter;
@property (readonly) Class superclass;
@property long long unitStyle;

- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isForPersonHeightUse;
- (id)numberFormatter;
- (void)receiveObservedValue:(id)arg1;
- (void)setForPersonHeightUse:(bool)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setUnitStyle:(long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromMeters:(double)arg1;
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;
- (long long)targetUnitFromMeters:(double)arg1;
- (id)unitStringFromMeters:(double)arg1 usedUnit:(long long*)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;
- (long long)unitStyle;

@end
