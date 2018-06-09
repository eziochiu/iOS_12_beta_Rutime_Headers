/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMassFormatter : NSFormatter <NSObservable, NSObserver> {
    void * _formatter;
    bool  _isForPersonMassUse;
    void * _reserved;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForPersonMassUse) bool forPersonMassUse;
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
- (bool)isForPersonMassUse;
- (id)numberFormatter;
- (void)receiveObservedValue:(id)arg1;
- (void)setForPersonMassUse:(bool)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setUnitStyle:(long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromKilograms:(double)arg1;
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;
- (long long)targetUnitFromKilograms:(double)arg1;
- (id)unitStringFromKilograms:(double)arg1 usedUnit:(long long*)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;
- (long long)unitStyle;

@end
