/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _addingOutputDeviceUIDs;
    struct { 
        unsigned int outputContextType : 1; 
    }  _has;
    int  _outputContextType;
    NSMutableArray * _removingOutputDeviceUIDs;
    NSMutableArray * _settingOutputDeviceUIDs;
}

@property (nonatomic, retain) NSMutableArray *addingOutputDeviceUIDs;
@property (nonatomic) bool hasOutputContextType;
@property (nonatomic) int outputContextType;
@property (nonatomic, retain) NSMutableArray *removingOutputDeviceUIDs;
@property (nonatomic, retain) NSMutableArray *settingOutputDeviceUIDs;

+ (Class)addingOutputDeviceUIDType;
+ (Class)removingOutputDeviceUIDType;
+ (Class)settingOutputDeviceUIDType;

- (void).cxx_destruct;
- (int)StringAsOutputContextType:(id)arg1;
- (void)addAddingOutputDeviceUID:(id)arg1;
- (void)addRemovingOutputDeviceUID:(id)arg1;
- (void)addSettingOutputDeviceUID:(id)arg1;
- (id)addingOutputDeviceUIDAtIndex:(unsigned long long)arg1;
- (id)addingOutputDeviceUIDs;
- (unsigned long long)addingOutputDeviceUIDsCount;
- (void)clearAddingOutputDeviceUIDs;
- (void)clearRemovingOutputDeviceUIDs;
- (void)clearSettingOutputDeviceUIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOutputContextType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)outputContextType;
- (id)outputContextTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)removingOutputDeviceUIDAtIndex:(unsigned long long)arg1;
- (id)removingOutputDeviceUIDs;
- (unsigned long long)removingOutputDeviceUIDsCount;
- (void)setAddingOutputDeviceUIDs:(id)arg1;
- (void)setHasOutputContextType:(bool)arg1;
- (void)setOutputContextType:(int)arg1;
- (void)setRemovingOutputDeviceUIDs:(id)arg1;
- (void)setSettingOutputDeviceUIDs:(id)arg1;
- (id)settingOutputDeviceUIDAtIndex:(unsigned long long)arg1;
- (id)settingOutputDeviceUIDs;
- (unsigned long long)settingOutputDeviceUIDsCount;
- (void)writeTo:(id)arg1;

@end
