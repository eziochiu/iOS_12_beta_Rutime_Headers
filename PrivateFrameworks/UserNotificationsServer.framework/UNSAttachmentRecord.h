/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSAttachmentRecord : NSObject {
    NSURL * _URL;
    unsigned long long  _family;
    bool  _hiddenFromDefaultExpandedView;
    NSString * _identifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _thumbnailClippingRect;
    NSNumber * _thumbnailFrameNumber;
    bool  _thumbnailHidden;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _thumbnailTimestamp;
    NSString * _type;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) unsigned long long family;
@property (nonatomic) bool hiddenFromDefaultExpandedView;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailClippingRect;
@property (nonatomic, copy) NSNumber *thumbnailFrameNumber;
@property (nonatomic) bool thumbnailHidden;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } thumbnailTimestamp;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)URL;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)family;
- (unsigned long long)hash;
- (bool)hiddenFromDefaultExpandedView;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setFamily:(unsigned long long)arg1;
- (void)setHiddenFromDefaultExpandedView:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setThumbnailClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setThumbnailFrameNumber:(id)arg1;
- (void)setThumbnailHidden:(bool)arg1;
- (void)setThumbnailTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setType:(id)arg1;
- (void)setURL:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailClippingRect;
- (id)thumbnailFrameNumber;
- (bool)thumbnailHidden;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })thumbnailTimestamp;
- (id)type;

@end
