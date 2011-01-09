/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSFileHandle : NSObject 
{
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)fileHandleWithStandardInput;
+ (id)fileHandleWithStandardOutput;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleWithNullDevice;
+ (id)fileHandleForReadingAtPath:(id)arg1;
+ (id)fileHandleForUpdatingAtPath:(id)arg1;
+ (id)fileHandleForReadingFromURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleForWritingToURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleForUpdatingURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleForWritingAtPath:(id)arg1;
+ (id)mf_createFileAtPath:(id)arg1 flags:(NSInteger)arg2 mode:(NSInteger)arg3;
+ (id)mf_fileHandleForTempFile:(id*)arg1 atPath:(id)arg2 mode:(NSInteger)arg3;

- (void)seekToFileOffset:(unsigned long long)arg1;
- (id)readDataOfLength:(NSUInteger)arg1;
- (unsigned long long)seekToEndOfFile;
- (id)readDataToEndOfFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (NSInteger)fileDescriptor;
- (id)initWithPath:(id)arg1 flags:(NSInteger)arg2 createMode:(NSInteger)arg3 error:(id*)arg4;
- (id)initWithPath:(id)arg1 flags:(NSInteger)arg2 createMode:(NSInteger)arg3;
- (id)availableData;
- (unsigned long long)offsetInFile;
- (void)synchronizeFile;
- (void)writeData:(id)arg1;
- (void)closeFile;

@end