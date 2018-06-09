/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentRevision : NSObject <NSCopying> {
    NSString * _identifier;
    int  _sequence;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *revisionString;
@property (nonatomic, readonly) int sequence;

+ (id)documentRevisionAtURL:(id)arg1 passphrase:(id)arg2 error:(id*)arg3;
+ (id)revisionWithRevisionString:(id)arg1;
+ (id)revisionWithSequence:(int)arg1 identifier:(id)arg2;

- (void).cxx_destruct;
- (long long)compareSequenceFromRevision:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithRevisionString:(id)arg1;
- (id)initWithSequence:(int)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)nextRevisionWithIdentifier:(id)arg1;
- (id)revisionString;
- (int)sequence;

@end
