/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFaceprint : NSObject {
    NSData * _faceprintData;
    long long  _faceprintVersion;
}

@property (nonatomic, readonly, retain) NSData *faceprintData;
@property (nonatomic, readonly) long long faceprintVersion;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)faceprintData;
- (long long)faceprintVersion;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFaceprintData:(id)arg1 faceprintVersion:(long long)arg2;

@end
