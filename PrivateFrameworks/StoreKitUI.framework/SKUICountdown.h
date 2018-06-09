/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICountdown : NSObject {
    NSURL * _URL;
    <SKUIArtworkProviding> * _artworkProvider;
    unsigned long long  _dateFormat;
    <SKUIArtworkProviding> * _endArtworkProvider;
    NSDate * _endDate;
    long long  _finalValue;
    UIColor * _flapBottomColor;
    UIColor * _flapTopColor;
    bool  _flapped;
    UIColor * _fontColor;
    long long  _initialValue;
    bool  _isLoaded;
    NSString * _numberFormat;
    long long  _rate;
    NSDate * _startDate;
    long long  _type;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) <SKUIArtworkProviding> *artworkProvider;
@property (nonatomic) unsigned long long dateFormat;
@property (nonatomic, retain) <SKUIArtworkProviding> *endArtworkProvider;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) long long finalValue;
@property (nonatomic, copy) UIColor *flapBottomColor;
@property (nonatomic, copy) UIColor *flapTopColor;
@property (getter=isFlapped, nonatomic) bool flapped;
@property (nonatomic, copy) UIColor *fontColor;
@property (nonatomic) long long initialValue;
@property (nonatomic, copy) NSString *numberFormat;
@property (nonatomic) long long rate;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)URL;
- (id)artworkProvider;
- (unsigned long long)dateFormat;
- (id)endArtworkProvider;
- (id)endDate;
- (long long)finalValue;
- (id)flapBottomColor;
- (id)flapTopColor;
- (id)fontColor;
- (id)initWithCountdownDictionary:(id)arg1;
- (long long)initialValue;
- (bool)isFlapped;
- (bool)isLoaded;
- (id)numberFormat;
- (long long)rate;
- (void)setArtworkProvider:(id)arg1;
- (void)setDateFormat:(unsigned long long)arg1;
- (void)setEndArtworkProvider:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFinalValue:(long long)arg1;
- (void)setFlapBottomColor:(id)arg1;
- (void)setFlapTopColor:(id)arg1;
- (void)setFlapped:(bool)arg1;
- (void)setFontColor:(id)arg1;
- (void)setInitialValue:(long long)arg1;
- (void)setNumberFormat:(id)arg1;
- (void)setRate:(long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setURL:(id)arg1;
- (id)startDate;
- (long long)type;
- (void)updateWithDictionary:(id)arg1;

@end
