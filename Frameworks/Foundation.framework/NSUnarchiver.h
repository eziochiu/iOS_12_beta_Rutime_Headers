/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnarchiver : NSCoder {
    void * allUnarchivedObjects;
    id  classVersions;
    unsigned long long  cursor;
    void * datax;
    long long  lastLabel;
    void * map;
    struct _NSZone { } * objectZone;
    void * pointerTable;
    id  reserved;
    BOOL  streamerVersion;
    void * stringTable;
    BOOL  swap;
    unsigned long long  systemVersion;
    BOOL  unused1;
    BOOL  unused2;
}

@property (getter=isAtEnd, readonly) bool atEnd;
@property (readonly) unsigned int systemVersion;

+ (id)classNameDecodedForArchiveClassName:(id)arg1;
+ (void)decodeClassName:(id)arg1 asClassName:(id)arg2;
+ (void)initialize;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithFile:(id)arg1;

- (void)_setAllowedClasses:(id)arg1;
- (id)classNameDecodedForArchiveClassName:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void*)arg3;
- (void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1;
- (void)decodeClassName:(id)arg1 asClassName:(id)arg2;
- (id)decodeDataObject;
- (id)decodeObject;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (id)initForReadingWithData:(id)arg1;
- (bool)isAtEnd;
- (struct _NSZone { }*)objectZone;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)setObjectZone:(struct _NSZone { }*)arg1;
- (unsigned int)systemVersion;
- (long long)versionForClassName:(id)arg1;

@end
