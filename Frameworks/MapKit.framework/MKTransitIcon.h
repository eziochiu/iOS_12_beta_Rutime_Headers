/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitIcon : NSObject <GEOTransitIconDataSource> {
    unsigned int  _cartoID;
    unsigned int  _defaultTransitType;
}

@property (nonatomic, readonly) unsigned int cartoID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int defaultTransitType;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int iconAttributeKey;
@property (nonatomic, readonly) unsigned int iconAttributeValue;
@property (nonatomic, readonly) long long iconType;
@property (readonly) Class superclass;

- (unsigned int)cartoID;
- (unsigned int)defaultTransitType;
- (unsigned int)iconAttributeKey;
- (unsigned int)iconAttributeValue;
- (long long)iconType;
- (id)initWithCartoId:(unsigned int)arg1 defaultTransitType:(unsigned int)arg2;

@end
