/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REImageContentProvider : NSObject <NSCoding, NSCopying> {
    REImage * _onePieceImage;
    REImage * _twoPieceBackgroundImage;
    REImage * _twoPieceForegroundImage;
}

@property (nonatomic, readonly) REImage *onePieceImage;
@property (nonatomic, readonly) REImage *twoPieceBackgroundImage;
@property (nonatomic, readonly) REImage *twoPieceForegroundImage;

+ (id)imageContentProviderFromClockKitImageProvider:(id)arg1;
+ (id)imageContentProviderWithOnePieceImage:(id)arg1;
+ (id)imageContentProviderWithOnePieceImage:(id)arg1 twoPieceForegroundImage:(id)arg2 twoPieceBackgroundImage:(id)arg3;

- (void).cxx_destruct;
- (id)clockKitImageProviderRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 foregroundImage:(id)arg2 backgroundImage:(id)arg3;
- (id)onePieceImage;
- (id)twoPieceBackgroundImage;
- (id)twoPieceForegroundImage;

@end
