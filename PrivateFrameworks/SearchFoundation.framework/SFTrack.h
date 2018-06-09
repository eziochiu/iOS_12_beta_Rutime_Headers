/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFTrack : NSObject <NSCopying, NSSecureCoding, SFTrack> {
    NSString * _duration;
    struct { 
        unsigned int highlighted : 1; 
    }  _has;
    bool  _highlighted;
    NSString * _number;
    SFActionItem * _playAction;
    NSURL * _preview;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *duration;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlighted;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *number;
@property (nonatomic, retain) SFActionItem *playAction;
@property (nonatomic, copy) NSURL *preview;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)duration;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasHighlighted;
- (bool)highlighted;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (id)number;
- (id)playAction;
- (id)preview;
- (void)setDuration:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNumber:(id)arg1;
- (void)setPlayAction:(id)arg1;
- (void)setPreview:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
