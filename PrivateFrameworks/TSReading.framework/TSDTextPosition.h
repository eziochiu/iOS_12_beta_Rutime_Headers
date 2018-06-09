/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDTextPosition : UITextPosition {
    unsigned long long  _charIndex;
    bool  _eolAffinity;
    bool  _isPreferredStart;
    float  _preferredPosition;
}

@property (nonatomic, readonly) unsigned long long charIndex;
@property (nonatomic, readonly) bool endOfLineAffinity;
@property (nonatomic, readonly) bool isPreferredStart;
@property (nonatomic, readonly) float preferredPosition;

+ (id)textPositionWithCharIndex:(unsigned long long)arg1;
+ (id)textPositionWithCharIndex:(unsigned long long)arg1 eolAffinity:(bool)arg2 preferredPosition:(float)arg3 isPreferredStart:(bool)arg4;

- (unsigned long long)charIndex;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)distanceFromPosition:(id)arg1;
- (bool)endOfLineAffinity;
- (id)initWithCharIndex:(unsigned long long)arg1;
- (id)initWithCharIndex:(unsigned long long)arg1 eolAffinity:(bool)arg2 preferredPosition:(float)arg3 isPreferredStart:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isPreferredStart;
- (float)preferredPosition;

@end
