/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraItemProperties : NSObject {
    NSString * _UTI;
    id /* block */  _completionBlock;
    NSDate * _creationDate;
    ICCameraDevice * _device;
    bool  _locked;
    NSDate * _modificationDate;
    NSString * _name;
    unsigned long long  _objectID;
    unsigned long long  _ownerID;
    ICCameraFolder * _parentFolder;
    unsigned long long  _parentID;
    unsigned int  _ptpObjectHandle;
    unsigned long long  _twinID;
    NSMutableDictionary * _userData;
    id  _userObject;
}

@property (retain) NSString *UTI;
@property (copy) id /* block */ completionBlock;
@property (retain) NSDate *creationDate;
@property ICCameraDevice *device;
@property bool locked;
@property (retain) NSDate *modificationDate;
@property (retain) NSString *name;
@property unsigned long long objectID;
@property unsigned long long ownerID;
@property ICCameraFolder *parentFolder;
@property unsigned long long parentID;
@property unsigned int ptpObjectHandle;
@property unsigned long long twinID;
@property (retain) NSMutableDictionary *userData;
@property (retain) id userObject;

- (id)UTI;
- (id /* block */)completionBlock;
- (id)creationDate;
- (void)dealloc;
- (id)device;
- (bool)locked;
- (id)modificationDate;
- (id)name;
- (unsigned long long)objectID;
- (unsigned long long)ownerID;
- (id)parentFolder;
- (unsigned long long)parentID;
- (unsigned int)ptpObjectHandle;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjectID:(unsigned long long)arg1;
- (void)setOwnerID:(unsigned long long)arg1;
- (void)setParentFolder:(id)arg1;
- (void)setParentID:(unsigned long long)arg1;
- (void)setPtpObjectHandle:(unsigned int)arg1;
- (void)setTwinID:(unsigned long long)arg1;
- (void)setUTI:(id)arg1;
- (void)setUserData:(id)arg1;
- (void)setUserObject:(id)arg1;
- (unsigned long long)twinID;
- (id)userData;
- (id)userObject;

@end
