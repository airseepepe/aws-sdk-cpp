﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kinesisanalyticsv2/model/Output.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

Output::Output() : 
    m_nameHasBeenSet(false),
    m_kinesisStreamsOutputHasBeenSet(false),
    m_kinesisFirehoseOutputHasBeenSet(false),
    m_lambdaOutputHasBeenSet(false),
    m_destinationSchemaHasBeenSet(false)
{
}

Output::Output(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_kinesisStreamsOutputHasBeenSet(false),
    m_kinesisFirehoseOutputHasBeenSet(false),
    m_lambdaOutputHasBeenSet(false),
    m_destinationSchemaHasBeenSet(false)
{
  *this = jsonValue;
}

Output& Output::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisStreamsOutput"))
  {
    m_kinesisStreamsOutput = jsonValue.GetObject("KinesisStreamsOutput");

    m_kinesisStreamsOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KinesisFirehoseOutput"))
  {
    m_kinesisFirehoseOutput = jsonValue.GetObject("KinesisFirehoseOutput");

    m_kinesisFirehoseOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaOutput"))
  {
    m_lambdaOutput = jsonValue.GetObject("LambdaOutput");

    m_lambdaOutputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationSchema"))
  {
    m_destinationSchema = jsonValue.GetObject("DestinationSchema");

    m_destinationSchemaHasBeenSet = true;
  }

  return *this;
}

JsonValue Output::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_kinesisStreamsOutputHasBeenSet)
  {
   payload.WithObject("KinesisStreamsOutput", m_kinesisStreamsOutput.Jsonize());

  }

  if(m_kinesisFirehoseOutputHasBeenSet)
  {
   payload.WithObject("KinesisFirehoseOutput", m_kinesisFirehoseOutput.Jsonize());

  }

  if(m_lambdaOutputHasBeenSet)
  {
   payload.WithObject("LambdaOutput", m_lambdaOutput.Jsonize());

  }

  if(m_destinationSchemaHasBeenSet)
  {
   payload.WithObject("DestinationSchema", m_destinationSchema.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
