/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKProgressProvider : NSObject <NSCopying, NSSecureCoding> {
    double  _backgroundRingAlpha;
    bool  _finalized;
    unsigned long long  _nextUpdateToken;
    bool  _paused;
    struct NSNumber { Class x1; } * _timerToken;
    UIColor * _tintColor;
    NSMutableDictionary * _updateHandlersByToken;
}

@property double backgroundRingAlpha;
@property (nonatomic) bool paused;
@property (nonatomic, retain) UIColor *tintColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (void)_commonInit;
- (void)_maybeStartOrStopUpdates;
- (bool)_needsUpdates;
- (double)_progressFractionForNow:(id)arg1;
- (void)_update;
- (void)_validate;
- (double)backgroundRingAlpha;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)paused;
- (double)progressFractionForNow:(id)arg1;
- (void)setBackgroundRingAlpha:(double)arg1;
- (void)setPaused:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (struct NSNumber { Class x1; }*)startUpdatesWithHandler:(id /* block */)arg1;
- (void)stopUpdatesForToken:(struct NSNumber { Class x1; }*)arg1;
- (long long)timeTravelUpdateFrequency;
- (id)tintColor;
- (void)validate;

@end
