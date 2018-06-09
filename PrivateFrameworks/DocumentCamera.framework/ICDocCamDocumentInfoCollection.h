/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface ICDocCamDocumentInfoCollection : NSObject {
    NSDate * _creationDate;
    NSMutableArray * _docInfos;
    NSDate * _modificationDate;
    NSString * _title;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) long long docCamPDFVersion;
@property (nonatomic, retain) NSMutableArray *docInfos;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (void)bumpModificationDate;
- (id)creationDate;
- (long long)docCamPDFVersion;
- (id)docInfos;
- (id)init;
- (id)modificationDate;
- (void)setCreationDate:(id)arg1;
- (void)setDocInfos:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)title;
- (id)uniqueIdentifier;

@end
