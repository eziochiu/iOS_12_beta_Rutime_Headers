/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFColor : NSObject <NSCopying, NSSecureCoding, SFColor> {
    double  _alphaComponent;
    double  _blueComponent;
    double  _greenComponent;
    struct { 
        unsigned int redComponent : 1; 
        unsigned int greenComponent : 1; 
        unsigned int blueComponent : 1; 
        unsigned int alphaComponent : 1; 
    }  _has;
    double  _redComponent;
}

@property (nonatomic) double alphaComponent;
@property (nonatomic) double blueComponent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) double greenComponent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double redComponent;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (double)alphaComponent;
- (double)blueComponent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (double)greenComponent;
- (bool)hasAlphaComponent;
- (bool)hasBlueComponent;
- (bool)hasGreenComponent;
- (bool)hasRedComponent;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (double)redComponent;
- (void)setAlphaComponent:(double)arg1;
- (void)setBlueComponent:(double)arg1;
- (void)setGreenComponent:(double)arg1;
- (void)setRedComponent:(double)arg1;

@end
