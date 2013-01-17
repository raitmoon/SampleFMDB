//
//  Artist.h
//  SampleFMDB
//
//  Created by tomo on 6/2/12.
//  Copyright (c) 2012 ideaxdiscovery. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Artist : NSObject
{
    NSInteger *id;
    NSString *name;
    NSString *genre;
    NSString *origin;
    NSString *yearsActive;
}

@property(nonatomic,assign)NSInteger *id;
@property(nonatomic,retain)NSString *name;
@property(nonatomic,retain)NSString *genre;
@property(nonatomic,retain)NSString *origin;
@property(nonatomic,retain)NSString *yearsActive;

@end
