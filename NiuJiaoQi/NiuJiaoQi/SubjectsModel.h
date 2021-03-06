//
//  SubjectsModel.h
//  NiuJiaoQi
//
//  Created by zhou Yangbo on 11-8-20.
//  Copyright 2011 GODPAPER. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BookMetadataVO.h"
#import "BookContentsVO.h"

@interface SubjectsModel : NSObject {
	
}

+(SubjectsModel *)sharedInstance;
+(int)getLevel;
+(void)setLevel:(int)value;
//Book metadata
+(BookMetadataVO *)getMetadata;
+(void)setMetadata:(BookMetadataVO *)value;
//Book contents
+(BookContentsVO *)getContents;
+(void)setContents:(BookContentsVO *)value;

@end
