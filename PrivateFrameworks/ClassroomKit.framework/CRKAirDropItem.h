/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKAirDropItem : NSObject {
    NSURL * _fileURL;
}

@property (nonatomic, readonly, copy) NSString *UTI;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *fileName;
@property (nonatomic, readonly) NSURL *fileURL;

- (void).cxx_destruct;
- (id)UTI;
- (id)copyToFolder:(id)arg1 error:(id*)arg2;
- (id)dictionaryRepresentation;
- (id)fileName;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (id)moveToFolder:(id)arg1 error:(id*)arg2;

@end
